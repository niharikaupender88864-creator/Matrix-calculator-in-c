function getA() {
    return [
        [
            Number(document.getElementById("a11").value),
            Number(document.getElementById("a12").value)
        ],
        [
            Number(document.getElementById("a21").value),
            Number(document.getElementById("a22").value)
        ]
    ];
}

function getB() {
    return [
        [
            Number(document.getElementById("b11").value),
            Number(document.getElementById("b12").value)
        ],
        [
            Number(document.getElementById("b21").value),
            Number(document.getElementById("b22").value)
        ]
    ];
}

function showMatrix(matrix) {
    document.getElementById("result").innerHTML =
        matrix[0][0] + " &nbsp;&nbsp; " + matrix[0][1] + "<br>" +
        matrix[1][0] + " &nbsp;&nbsp; " + matrix[1][1];
}

function addMatrices() {
    let A = getA();
    let B = getB();

    let C = [
        [A[0][0]+B[0][0], A[0][1]+B[0][1]],
        [A[1][0]+B[1][0], A[1][1]+B[1][1]]
    ];

    showMatrix(C);
}

function subtractMatrices() {
    let A = getA();
    let B = getB();

    let C = [
        [A[0][0]-B[0][0], A[0][1]-B[0][1]],
        [A[1][0]-B[1][0], A[1][1]-B[1][1]]
    ];

    showMatrix(C);
}

function multiplyMatrices() {

    let A = getA();
    let B = getB();

    let C = [
        [
            A[0][0]*B[0][0] + A[0][1]*B[1][0],
            A[0][0]*B[0][1] + A[0][1]*B[1][1]
        ],
        [
            A[1][0]*B[0][0] + A[1][1]*B[1][0],
            A[1][0]*B[0][1] + A[1][1]*B[1][1]
        ]
    ];

    showMatrix(C);
}

function transposeMatrix() {

    let A = getA();

    let T = [
        [A[0][0], A[1][0]],
        [A[0][1], A[1][1]]
    ];

    showMatrix(T);
}

function determinant() {

    let A = getA();

    let det = A[0][0]*A[1][1] - A[0][1]*A[1][0];

    document.getElementById("result").innerHTML =
        "Determinant = <b>" + det + "</b>";
}
