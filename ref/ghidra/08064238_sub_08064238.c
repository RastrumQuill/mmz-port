// sub_08064238 at 0x08064238 (thumb)

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 sub_08064238(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080935E8(param_1,3);
  sub_080935E8(param_1,3);
  sub_080935E8(param_1,4);
  DAT_02022890 = (DAT_02022890 * 0x343fd + 0x269ec3 & 0x7fffffff) * 0x343fd + 0x269ec3 & 0x7fffffff;
  iVar1 = param_1 + 0x4c;
  sub_0808827C(2,iVar1);
  DAT_02022890 = (DAT_02022890 * 0x343fd + 0x269ec3 & 0x7fffffff) * 0x343fd + 0x269ec3 & 0x7fffffff;
  sub_0808827C(2,iVar1);
  sub_0808827C(1,iVar1);
  sub_08001EAC(2);
  sub_08015698(3,iVar1);
  if (DAT_02022b2c < 9999) {
    DAT_02022b2c = DAT_02022b2c + 1;
  }
  sub_08015794(param_1,iVar1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

