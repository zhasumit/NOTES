import { describe, expect, test, beforeAll } from "bun:test";

beforeAll(() => {
    // setup tests
});

describe("math", () => {
    test("sum", () => {
        expect(2 + 2).toBe(4);
    });
});
