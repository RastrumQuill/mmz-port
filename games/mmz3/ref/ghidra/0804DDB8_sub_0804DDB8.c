// sub_0804DDB8 at 0x0804DDB8 (thumb)

undefined8 sub_0804DDB8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    local_1c = *(undefined4 *)(param_1 + 0x58);
    local_20 = *(int *)(DAT_0202f5c0 + 0x54) + 0xf000;
    iVar1 = sub_0807DF5C(param_1,&local_20,0,0);
    piVar4 = (int *)(param_1 + 200);
    *piVar4 = iVar1;
    *(undefined *)(iVar1 + 0xb9) = 0;
    *(undefined4 *)(*piVar4 + 100) = *(undefined4 *)(param_1 + 0xb8);
    local_1c = *(int *)(param_1 + 0x58) + -0xa000;
    local_20 = *(int *)(DAT_0202f5c0 + 0x54) + -0x7800;
    iVar1 = sub_0807DF5C(param_1,&local_20,0,1);
    piVar3 = (int *)(param_1 + 0xcc);
    *piVar3 = iVar1;
    *(undefined *)(iVar1 + 0xb9) = 0;
    *(undefined4 *)(*piVar3 + 100) = *(undefined4 *)(param_1 + 0xb8);
    *(int *)(*piVar3 + 0x2c) = *piVar4;
    *(int *)(*piVar4 + 0x2c) = *piVar3;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    if ((*(char *)(*(int *)(param_1 + 200) + 0xb9) == '\x01') &&
       (*(char *)(*(int *)(param_1 + 0xcc) + 0xb9) == '\x01')) {
LAB_0804dfe4:
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    break;
  case 2:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0xab01);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x5000;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    iVar1 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar1;
    if (0x700 < iVar1) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    if (*(int *)(DAT_0202f5c0 + 0x58) < *(int *)(param_1 + 0x58)) {
      *(int *)(param_1 + 0x58) = *(int *)(DAT_0202f5c0 + 0x58);
      goto LAB_0804dfe4;
    }
    break;
  case 4:
    sub_0800471C(0xd4);
    uVar2 = 0xab02;
    goto LAB_0804df5a;
  case 5:
  case 9:
  case 0xd:
    goto switchD_0804ddd2_caseD_5;
  case 6:
    sub_08017700(param_1,0xab03);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 7:
    sub_080177F4(param_1);
    goto LAB_0804dfe4;
  case 8:
    uVar2 = 0xab04;
LAB_0804df5a:
    sub_08017700(param_1,uVar2);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_0804ddd2_caseD_5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') goto LAB_0804dfe4;
    break;
  case 10:
    *(undefined *)(*(int *)(param_1 + 200) + 0xb9) = 2;
    *(undefined *)(*(int *)(param_1 + 0xcc) + 0xb9) = 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 0xb:
    if (*(char *)(*(int *)(param_1 + 0xcc) + 0xb9) == '\x03') {
      sub_0800471C(0xd7);
      uVar2 = 0xab06;
LAB_0804dfba:
      sub_08017700(param_1,uVar2);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
LAB_0804dfc6:
    sub_080177F4(param_1);
    break;
  case 0xc:
    if (*(char *)(*(int *)(param_1 + 200) + 0xb9) == '\x03') {
      sub_0800471C(0xd7);
      uVar2 = 0xab08;
      goto LAB_0804dfba;
    }
    goto LAB_0804dfc6;
  case 0xe:
    sub_08017700(param_1,0xab1f);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 0xf:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      uVar2 = 1;
      goto LAB_0804e01a;
    }
  default:
    break;
  }
  uVar2 = 0;
LAB_0804e01a:
  return CONCAT44(in_lr,uVar2);
}

