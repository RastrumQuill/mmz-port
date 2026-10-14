// sub_0809C77C at 0x0809C77C (thumb)

undefined4 sub_0809C77C(int param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  sub_080128D4();
  uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (uVar2 < 0x6001) {
    puVar3 = (ushort *)(param_1 + 0xb8);
    uVar1 = *puVar3;
    *puVar3 = uVar1 + 0x80;
    if (0x2000 < (ushort)(uVar1 + 0x80)) {
      *puVar3 = 0x2000;
    }
    *(char *)(param_1 + 0x24) = (char)(*puVar3 >> 8) + *(char *)(param_1 + 0x24);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

