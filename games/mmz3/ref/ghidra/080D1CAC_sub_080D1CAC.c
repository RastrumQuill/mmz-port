// sub_080D1CAC at 0x080D1CAC (thumb)

undefined4 sub_080D1CAC(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202fd8a = 0x3cc;
    DAT_0202f78a = 8;
    sub_08017700(param_1,0xbd10);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d338,param_1 + 0x54,9);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    iVar1 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 100) = iVar1 + 0x800;
    *(int *)(param_1 + 0x54) = DAT_020302c0 + 0x87ff;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    iVar1 = *(int *)(param_1 + 0x54) + -0x800;
    *(int *)(param_1 + 0x54) = iVar1;
    if (*(int *)(param_1 + 100) <= iVar1) {
      return in_lr;
    }
    sub_0800471C(0x56);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    *(undefined *)(param_1 + 0x94) = 0x5a;
    break;
  case 2:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xbd12);
    break;
  case 3:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    break;
  case 4:
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x60) < 0x700) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x2a;
    }
    iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar1;
    iVar1 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54),iVar1 + 0x600);
    if (iVar1 == 0) {
      return in_lr;
    }
    iVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar1 + -0x600;
    sub_08017700(param_1,0xbd1b);
    break;
  case 5:
    sub_080177F4(param_1);
    uVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 2;
    goto LAB_080d1e50;
  case 6:
    iVar1 = sub_080D03E8(param_1,0xbd1b,1);
    uVar2 = iVar1 << 0x10;
LAB_080d1e50:
    if (uVar2 == 0) {
      return in_lr;
    }
    break;
  default:
    goto switchD_080d1cc0_caseD_7;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d1cc0_caseD_7:
  return in_lr;
}

