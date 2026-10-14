// sub_080A5180 at 0x080A5180 (thumb)

undefined4 sub_080A5180(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if ((DAT_02022ae0 & 0x10) == 0) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
      iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
      if (iVar1 < *(int *)(param_1 + 0x50)) {
        uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
        *(undefined4 *)(param_1 + 0x50) = uVar2;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else {
      *(uint *)(param_1 + 0x58) = DAT_02022ae0 & 0x10;
      uVar3 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
      if (0x3000 < uVar3) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      }
    }
    sub_0809C980(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

