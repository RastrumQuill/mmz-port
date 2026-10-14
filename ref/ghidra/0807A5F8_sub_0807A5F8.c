// sub_0807A5F8 at 0x0807A5F8 (thumb)

undefined4 sub_0807A5F8(int param_1,byte param_2,undefined param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005458(DAT_02022f74);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0xf;
    *(undefined4 *)(iVar2 + 0x14) = 0x807a6cd;
    *(undefined2 *)(iVar2 + 0x1c) = DAT_02022f9e;
    *(undefined *)(iVar2 + 0x1e) = DAT_02022fef;
    *(byte *)(iVar2 + 0x10) = param_2;
    *(undefined *)(iVar2 + 0x11) = param_3;
    uVar3 = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar2 + 0x50) = uVar3;
    *(int *)(iVar2 + 0x20) = param_1;
    if (param_2 < 6) {
      bVar1 = *(byte *)(param_1 + 10) >> 4;
      *(byte *)(iVar2 + 0x44) = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(iVar2 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(iVar2 + 10) | 0x10;
      }
      *(byte *)(iVar2 + 10) = bVar1;
    }
  }
  return in_lr;
}

