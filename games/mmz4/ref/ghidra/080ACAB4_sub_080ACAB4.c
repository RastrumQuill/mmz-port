// sub_080ACAB4 at 0x080ACAB4 (thumb)

undefined4 sub_080ACAB4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  local_14[0] = 5;
  local_14[1] = 6;
  iVar2 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar2 + 0xba);
  if ((*(byte *)(iVar2 + 0xc) < 2) && ((*(uint *)(param_1 + 0x8c) & 0x200) == 0)) {
    if ((*(char *)(param_1 + 0xd) != '\0') && (*(char *)(param_1 + 0xd) != *(char *)(iVar2 + 0xb7)))
    {
      *(char *)(param_1 + 0xd) = *(char *)(iVar2 + 0xb7);
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    sub_0801D3D0(param_1,*(undefined *)
                          (local_14 + ((int)(uint)bVar1 >> *(sbyte *)(param_1 + 0x11) & 1)));
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885f834 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080ACFA8(param_1);
  }
  return in_lr;
}

