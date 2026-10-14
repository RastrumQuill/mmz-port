// sub_080AFC78 at 0x080AFC78 (thumb)

undefined4 sub_080AFC78(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x40) == 0) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b69a4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    iVar3 = 0xb;
    do {
      uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
      local_24 = *(int *)(param_1 + 0x4c) + (0x10 - (uVar1 * 2 >> 0x11 & 0x1f)) * 0x100;
      uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar1 & 0x7fffffff;
      iVar2 = sub_080C8CB0(uVar1 * 2 >> 0x11,0x60);
      local_20 = *(int *)(param_1 + 0x50) + iVar2 * -0x100;
      sub_0808827C(3,&local_24);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    if (*(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c)) {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x1800;
      sub_0809B1B4(param_1,0x100,0xfffffd80,3);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x3000;
      sub_0809B1B4(param_1,0x80,0xfffffc00,3);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x1800;
      sub_0809B1B4(param_1,0x200,0xfffffd00,4);
    }
    else {
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x1800;
      sub_0809B1B4(param_1,0xffffff00,0xfffffd80,3);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x3000;
      sub_0809B1B4(param_1,0xffffff80,0xfffffc00,3);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x1800;
      sub_0809B1B4(param_1,0xfffffe00,0xfffffd00,4);
    }
    sub_0809C980(param_1);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
  }
  return in_lr;
}

