// sub_0804852C at 0x0804852C (thumb)

undefined4 sub_0804852C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x13) = 0x1e;
    *(undefined *)(param_1 + 0xce) = 0;
    sub_0809F32C(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
LAB_0804868c:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    iVar3 = *(int *)(param_1 + 0x54) + -0x180;
    *(int *)(param_1 + 0x54) = iVar3;
    iVar2 = *(int *)(param_1 + 0xb4) + -0x5000;
    if (iVar2 <= iVar3) break;
    *(int *)(param_1 + 0x54) = iVar2;
    goto LAB_0804868c;
  case 3:
    iVar3 = *(int *)(param_1 + 0x58) + -0x180;
    *(int *)(param_1 + 0x58) = iVar3;
    iVar2 = *(int *)(param_1 + 0xb8) + -0x7800;
    if (iVar3 < iVar2) {
      *(int *)(param_1 + 0x58) = iVar2;
      goto LAB_0804868c;
    }
    break;
  case 4:
    iVar3 = *(int *)(param_1 + 0x54) + 0x180;
    *(int *)(param_1 + 0x54) = iVar3;
    iVar2 = *(int *)(param_1 + 0xb4) + 0x5000;
    if (iVar2 < iVar3) {
      *(int *)(param_1 + 0x54) = iVar2;
      goto LAB_0804868c;
    }
    break;
  case 5:
    iVar3 = *(int *)(param_1 + 0x58) + 0x180;
    *(int *)(param_1 + 0x58) = iVar3;
    iVar2 = *(int *)(param_1 + 0xb8) + -0x3700;
    if (iVar2 < iVar3) {
      *(int *)(param_1 + 0x58) = iVar2;
      goto LAB_0804868c;
    }
    break;
  case 6:
    iVar3 = *(int *)(param_1 + 0x54) + -0x180;
    *(int *)(param_1 + 0x54) = iVar3;
    iVar2 = *(int *)(param_1 + 0xb4) + -0x5000;
    if (iVar3 < iVar2) {
      *(int *)(param_1 + 0x54) = iVar2;
      goto LAB_0804868c;
    }
    break;
  case 7:
    iVar3 = *(int *)(param_1 + 0x58) + -0x180;
    *(int *)(param_1 + 0x58) = iVar3;
    iVar2 = *(int *)(param_1 + 0xb8) + -0x7800;
    if (iVar3 < iVar2) {
      *(int *)(param_1 + 0x58) = iVar2;
      goto LAB_0804868c;
    }
    break;
  case 8:
    iVar3 = *(int *)(param_1 + 0x54) + 0x180;
    *(int *)(param_1 + 0x54) = iVar3;
    if (*(int *)(param_1 + 0xb4) < iVar3) {
      *(undefined *)(param_1 + 0xce) = 1;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4);
      goto LAB_0804868c;
    }
    break;
  case 9:
    *(undefined4 *)(param_1 + 100) = 300;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 10:
    iVar3 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar3;
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0xd) = 10;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080041E4(*(undefined *)(param_1 + 0xc6));
    sub_080177F4(param_1);
  default:
    goto switchD_08048540_caseD_b;
  }
  sub_080041E4(*(undefined *)(param_1 + 0xc6));
  sub_080177F4(param_1);
switchD_08048540_caseD_b:
  return in_lr;
}

