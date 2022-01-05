const raylib = require('../index.js')

describe('Raylib Core Module', () => {

	it('can create and close a window', () => {
		let result = true
		try {
			raylib.SetWindowState(raylib.ConfigFlags.FLAG_WINDOW_HIDDEN)
			raylib.InitWindow(100, 100, 'Test')
			expect(raylib.IsWindowReady()).toBe(true)
			raylib.CloseWindow()
		} catch {
			result = false
		}
		expect(result).toBe(true)
	})

	it('can clear and update the screen', () => {
		raylib.SetWindowState(raylib.ConfigFlags.FLAG_WINDOW_HIDDEN)
		raylib.InitWindow(100, 100, 'Test')
		raylib.BeginDrawing()
		raylib.ClearBackground({r: 255, g: 255, b: 255, a: 255})
		raylib.EndDrawing()
		raylib.CloseWindow()
	})
})

describe('Shapes Module', () => {
	beforeEach(() => {
		raylib.SetWindowState(raylib.ConfigFlags.FLAG_WINDOW_HIDDEN)
		raylib.InitWindow(100, 100, 'Test')
	})

	afterEach(() => {
		raylib.CloseWindow()
	})

	it('can draw shapes to the screen', () => {
		raylib.DrawPixelV({x: 10, y: 10}, {r: 255, g: 255, b: 0, a: 255})
		raylib.DrawRectanglePro(
			{x: 100, y: 100, width: 20, height: 20},
			{x: 20/2, y: 20/2},
			0,
			raylib.RED
		)

	})

	it.todo('converts JS arrays to pointer arrays for drawing functions')
	// () => {
	// 	raylib.DrawLineStrip([{x: 0, y: 0}, {x: 10, y: 10}], 2, raylib.GREEN)
	// 	raylib.DrawTriangleFan([{x: 0, y: 0}, {x: 10, y: 10}], 2, raylib.GREEN)
  //   raylib.DrawTriangleStrip([{x: 0, y: 0}, {x: 10, y: 10}], 2, raylib.GREEN)
		
	// }

	it('can detect collisions between shapes', () => {
		let test_a = raylib.CheckCollisionRecs(
			{x: 0, y: 0, width: 10, height: 10},
			{x: 5, y: 0, width: 10, height: 10}
		)
		expect(test_a).toBe(true)

		let test_b = raylib.CheckCollisionRecs(
			{x: 0, y: 0, width: 10, height: 10},
			{x: 50, y: 0, width: 10, height: 10}
		)
		expect(test_b).toBe(false)

		let test_c = raylib.CheckCollisionCircleRec(
			{x: -5, y: -5}, 10,
			{x: 0, y: 0, width: 20, height: 20}
		)
		expect(test_c).toBe(true)

		let test_d = raylib.CheckCollisionCircleRec(
			{x: 0, y: 0}, 10,
			{x: 10, y: 10, width: 20, height: 20}
		)
		expect(test_d).toBe(false)
	})

})