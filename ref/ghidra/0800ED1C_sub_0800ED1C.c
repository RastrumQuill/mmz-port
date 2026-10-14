// sub_0800ED1C at 0x0800ED1C (thumb)

undefined4 sub_0800ED1C(uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = ((uint)(param_2 << 0x18) >> 0x16) + (param_1 & 0xff) * 0xc;
  if (*(ushort *)(&DAT_0829b538 + iVar2) != 0) {
    bVar1 = false;
    DAT_02022f69 = (byte)*(undefined2 *)(&DAT_0829b53a + iVar2);
    DAT_02022f12 = *(ushort *)(&DAT_0829b538 + iVar2);
    sub_08005420(DAT_02022e98);
    iVar2 = *(int *)(*(int *)(DAT_02022e98 + 0xc) + 4);
    *(int *)(DAT_02022e98 + 0xc) = iVar2;
    if (iVar2 != DAT_02022e98 + 0x14) {
      do {
        if (*(char *)(iVar2 + 9) == '9') {
          bVar1 = true;
        }
        iVar2 = *(int *)(*(int *)(DAT_02022e98 + 0xc) + 4);
        *(int *)(DAT_02022e98 + 0xc) = iVar2;
      } while (iVar2 != DAT_02022e98 + 0x14);
    }
    if (bVar1) {
      sub_080014E8(&DAT_084b8474,(DAT_02022f12 - 0x200) * 0x20 + 0x10000);
      sub_0800179C(&DAT_084b8480,(DAT_02022f69 - 4) * 0x20 + 0x200);
    }
  }
  return in_lr;
}

