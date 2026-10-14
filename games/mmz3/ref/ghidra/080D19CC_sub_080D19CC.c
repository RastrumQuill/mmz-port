// sub_080D19CC at 0x080D19CC (thumb)

undefined4 sub_080D19CC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_0800393C(&DAT_085d79ac,(DAT_0202fa22 - 0x200) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d79b8,(DAT_0202f822 - 4) * 0x20 + 0x200);
    sub_08017528(param_1);
    sub_08017700(param_1,0x902);
    *(undefined *)(param_1 + 0x24) = 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
    iVar2 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 100) = iVar2 + 0x1c00;
    *(int *)(param_1 + 0x54) = DAT_020302c0 + 0x9bff;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    iVar2 = *(int *)(param_1 + 0x54) + -0x800;
    *(int *)(param_1 + 0x54) = iVar2;
    if (*(int *)(param_1 + 100) <= iVar2) {
      return in_lr;
    }
    sub_0801ACF8(0x10,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    break;
  case 2:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x1e;
    break;
  case 3:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    break;
  case 4:
    sub_080177F4(param_1);
    iVar2 = *(int *)(param_1 + 0x54) + 0x200;
    goto LAB_080d1c80;
  case 5:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0800393C(&DAT_085d79ac,(DAT_0202fa22 - 0x200) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d79b8,(DAT_0202f822 - 4) * 0x20 + 0x200);
    sub_08017700(param_1,0x902);
    *(undefined *)(param_1 + 0x24) = 0x20;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x4d) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d320,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    iVar2 = DAT_020302c0;
    *(int *)(param_1 + 0x54) = DAT_020302c0 + 0x97ff;
    iVar2 = sub_0800A104(iVar2 + 0x1fff,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x68) = iVar2;
    *(int *)(param_1 + 0x58) = iVar2 + -0x3000;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 6:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x600;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) * 0x3f + *(int *)(param_1 + 0x68) >> 6;
    if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
      return in_lr;
    }
    sub_0801ACF8(4,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 7:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) * 0x3f + -0x3000 + *(int *)(param_1 + 0x68) >> 6;
    *(byte *)(param_1 + 0x24) = (byte)((int)((uint)*(byte *)(param_1 + 0x24) * 0xf + 0x4f) >> 4);
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      return in_lr;
    }
    iVar2 = *(int *)(param_1 + 0x5c) * 0x1f + 0x600 >> 5;
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar2 = *(int *)(param_1 + 0x54) + iVar2;
LAB_080d1c80:
    *(int *)(param_1 + 0x54) = iVar2;
    if (iVar2 < DAT_020302c0 + 0x97ff) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_080d19e0_caseD_8;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d19e0_caseD_8:
  return in_lr;
}

