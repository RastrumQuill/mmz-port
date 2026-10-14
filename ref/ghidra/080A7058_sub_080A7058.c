// sub_080A7058 at 0x080A7058 (thumb)

undefined4 sub_080A7058(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    if ((DAT_02022ae0 & 4) == 0) {
      uVar1 = 0x20;
    }
    else {
      uVar1 = 0x10;
    }
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    iVar2 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x50) = iVar2;
    if (0x7000 < iVar2 - *(int *)(param_1 + 0xc0)) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc0) + 0x7000;
      if (*(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c)) {
        DAT_02022b64 = DAT_02022b64 & 0xfffe | 8;
      }
      sub_08001EE8((int)*(short *)(param_1 + 0xc4));
      *(short *)(param_1 + 0xc4) = -1;
      sub_08001EAC(0xc3);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  if ((DAT_0200520c & 0x7f) != 3) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080A711C(param_1);
  }
  return in_lr;
}

