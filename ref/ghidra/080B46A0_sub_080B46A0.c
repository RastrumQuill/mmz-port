// sub_080B46A0 at 0x080B46A0 (thumb)

undefined8 sub_080B46A0(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (((param_3 & 0xff) - 1 < 0x4e) &&
     (iVar1 = (param_2 & 0xff) * 2,
     uVar2 = (param_3 & 0xff) - (uint)(byte)(&DAT_082b7258)[iVar1] & 0xff,
     uVar2 < (byte)(&DAT_082b7259)[iVar1])) {
    iVar3 = 0;
    iVar1 = (param_2 & 0xff) * 4;
    if (**(byte **)(&DAT_082b726c + iVar1) <= uVar2) {
      do {
        uVar2 = uVar2 - *(byte *)(*(int *)(&DAT_082b726c + iVar1) + iVar3) & 0xff;
        iVar3 = iVar3 + 1;
      } while (*(byte *)(*(int *)(&DAT_082b726c + iVar1) + iVar3) <= uVar2);
    }
    iVar1 = (int)(char)iVar3;
  }
  else {
    iVar1 = -1;
  }
  return CONCAT44(in_lr,iVar1);
}

