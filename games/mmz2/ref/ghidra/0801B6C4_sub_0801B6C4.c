// sub_0801B6C4 at 0x0801B6C4 (thumb)

undefined8 sub_0801B6C4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xd4);
  if (iVar2 == 0) {
    pbVar4 = *(byte **)(param_1 + 0xc);
    bVar1 = *pbVar4;
    while (bVar1 != 0xff) {
      iVar2 = sub_080EF118(param_1,*(undefined4 *)(&DAT_08326364 + (uint)*pbVar4 * 4));
      if (iVar2 != 0) {
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
        uVar3 = 0;
        goto LAB_0801b71c;
      }
      iVar2 = *(int *)(param_1 + 0xc);
      pbVar4 = (byte *)(iVar2 + 8);
      *(byte **)(param_1 + 0xc) = pbVar4;
      bVar1 = *(byte *)(iVar2 + 8);
    }
    DAT_0202ec42 = DAT_0202ec42 & 0xfffe;
    uVar3 = 1;
  }
  else {
    *(int *)(param_1 + 0xd4) = iVar2 + -1;
    uVar3 = 0;
  }
LAB_0801b71c:
  return CONCAT44(in_lr,uVar3);
}

