// sub_08021FA8 at 0x08021FA8 (thumb)

undefined8 sub_08021FA8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 in_lr;
  
  uVar1 = sub_08008D80();
  if (((uVar1 & 0xf) == 0) || ((uVar1 & 0x8000) != 0)) {
    uVar1 = (uint)DAT_020011d2;
    if (uVar1 != 0) {
      iVar3 = uVar1 * 0x18;
      puVar4 = &DAT_02001000 + uVar1 * 0x18;
      do {
        uVar1 = uVar1 - 1;
        if ((((uVar1 != param_3) && ((*(ushort *)(puVar4 + 0x1be) & 0x8000) == 0)) &&
            (param_1 - (*(int *)(&DAT_020011c4 + iVar3) - (uint)*(ushort *)(puVar4 + 0x1c0)) <
             (uint)*(ushort *)(puVar4 + 0x1c0) << 1)) &&
           (param_2 - ((*(int *)((int)&DAT_020011c8 + iVar3) + 1) -
                      (uint)*(ushort *)(puVar4 + 0x1c2)) < (uint)*(ushort *)(puVar4 + 0x1c2) << 1))
        goto LAB_08021fd2;
        iVar3 = iVar3 + -0x18;
        puVar4 = puVar4 + -0x18;
      } while (uVar1 != 0);
    }
    uVar2 = 1;
  }
  else {
LAB_08021fd2:
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

