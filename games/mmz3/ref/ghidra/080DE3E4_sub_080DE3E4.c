// sub_080DE3E4 at 0x080DE3E4 (thumb)

undefined4 sub_080DE3E4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080177F4();
  if (*(byte *)(param_1 + 0x11) != (DAT_02030108 >> 6 & 1)) {
    *(byte *)(param_1 + 0x11) = DAT_02030108 >> 6 & 1;
    sub_0800393C(&DAT_085d8514,(DAT_0202fb46 - 0x280) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8520,(DAT_0202f946 - 5) * 0x20 + 0x200);
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    iVar1 = (0x70000 - *(int *)(param_1 + 0x58)) * 0x800 >> 0x10;
    if (iVar1 < *(int *)(param_1 + 0x60)) {
      *(int *)(param_1 + 0x60) = iVar1;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (0x20 < iVar1) {
      return in_lr;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    if (4 < DAT_0202f4a4) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080de450_caseD_2:
      iVar1 = *(int *)(param_1 + 0x60) + 4;
      *(int *)(param_1 + 0x60) = iVar1;
      iVar1 = *(int *)(param_1 + 0x58) - iVar1;
      *(int *)(param_1 + 0x58) = iVar1;
      if (iVar1 < DAT_020302c4 + -0x8000) {
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
        *(undefined4 *)(param_1 + 0x60) = 0x200;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    break;
  case 2:
    goto switchD_080de450_caseD_2;
  case 3:
    if (DAT_0202f4a4 < 7) {
      return in_lr;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836df88;
    *(undefined2 *)(param_1 + 0x26) = 0x2001;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    iVar1 = (0x70000 - *(int *)(param_1 + 0x58)) * 0x800 >> 0x10;
    if (iVar1 < *(int *)(param_1 + 0x60)) {
      *(int *)(param_1 + 0x60) = iVar1;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (iVar1 < 0x21) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080de450_caseD_5:
      if (8 < DAT_0202f4a4) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080de450_caseD_6:
        iVar1 = *(int *)(param_1 + 0x60) + 4;
        *(int *)(param_1 + 0x60) = iVar1;
        iVar1 = *(int *)(param_1 + 0x58) - iVar1;
        *(int *)(param_1 + 0x58) = iVar1;
        if (iVar1 < DAT_020302c4 + -0x8000) {
          *(undefined4 *)(param_1 + 0xc) = 2;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
          sub_080DE5B8(param_1);
        }
      }
    }
    break;
  case 5:
    goto switchD_080de450_caseD_5;
  case 6:
    goto switchD_080de450_caseD_6;
  default:
    break;
  }
  return in_lr;
}

