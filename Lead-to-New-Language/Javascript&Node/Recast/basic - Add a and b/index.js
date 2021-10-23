const recast = require("recast")
const parse_code = `

    function add(a, b) {  // 没有类型检测，注意
        let c = a+b;
        return c;
    }

`
const ast = recast.parse(parse_code)
// const json_str = JSON.stringify(ast.program.body[0])
// console.log(json_str)
console.log(ast.program.body[0])

/* Output:

FunctionDeclaration {
  type: 'FunctionDeclaration',
  id: Identifier {
    type: 'Identifier',
    name: 'add',
    loc: {
      start: [Object],
      end: [Object],
      lines: [Lines],
      tokens: [Array],
      indent: 4
    }
  },
  params: [
    Identifier { type: 'Identifier', name: 'a', loc: [Object] },
    Identifier { type: 'Identifier', name: 'b', loc: [Object] }
  ],
  body: BlockStatement {
    type: 'BlockStatement',
    body: [ [VariableDeclaration], [ReturnStatement] ],
    loc: {
      start: [Object],
      end: [Object],
      lines: [Lines],
      tokens: [Array],
      indent: 4
    }
  },
  generator: false,
  expression: false,
  async: false,
  loc: {
    start: { line: 3, column: 4, token: 0 },
    end: { line: 6, column: 5, token: 19 },
    lines: Lines {
      infos: [Array],
      mappings: [],
      cachedSourceMap: null,
      cachedTabWidth: undefined,
      length: 8,
      name: null
    },
    tokens: [
      [Object], [Object], [Object],
      [Object], [Object], [Object],
      [Object], [Object], [Object],
      [Object], [Object], [Object],
      [Object], [Object], [Object],
      [Object], [Object], [Object],
      [Object]
    ],
    indent: 4
  }
}

*/


