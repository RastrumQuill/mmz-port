// sub_08097694 at 0x08097694 (thumb)

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 sub_08097694(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080BE1AC(param_1,1,0);
  sub_080BE1AC(param_1,2,0);
  DAT_0202e188 = (DAT_0202e188 * 0x343fd + 0x269ec3 & 0x7fffffff) * 0x343fd + 0x269ec3 & 0x7fffffff;
  iVar1 = param_1 + 0x54;
  sub_080AC60C(2,iVar1);
  DAT_0202e188 = (DAT_0202e188 * 0x343fd + 0x269ec3 & 0x7fffffff) * 0x343fd + 0x269ec3 & 0x7fffffff;
  sub_080AC60C(2,iVar1);
  sub_080AC60C(1,iVar1);
  sub_080032EC(0x2a);
  sub_0801DD2C(0,iVar1);
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,iVar1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

