import XCTest
import SwiftTreeSitter
import TreeSitterFluent

final class TreeSitterFluentTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_fluent())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Fluent grammar")
    }
}
