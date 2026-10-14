// sub_08020304 at 0x08020304 (thumb)

undefined4 sub_08020304(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a9a20 + (uint)*(byte *)(param_1 + 0xe) * 4));
  cVar1 = *(char *)(param_1 + 0x95);
  sub_0801BC68(param_1);
  iVar2 = (int)*(char *)(param_1 + 0x129);
  if (-1 < iVar2) {
    if (((iVar2 == 0) || (iVar2 = iVar2 + -1, iVar2 == 0)) && (cVar1 != *(char *)(param_1 + 0x95)))
    {
      iVar2 = 4;
      if (*(char *)(param_1 + 0x115) == -0x69) {
        sub_08018BE8(param_1,0x99);
      }
      else {
        sub_08018BE8(param_1,0x97);
      }
    }
    *(char *)(param_1 + 0x129) = (char)iVar2;
  }
  return in_lr;
}

