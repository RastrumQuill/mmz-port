// sub_080EAC68 at 0x080EAC68 (thumb)

undefined8 sub_080EAC68(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (param_2 * 0x1000000 < 1) {
LAB_080ead40:
    iVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar2 = sub_080DC850(0,param_1);
      if (iVar2 == 0) goto LAB_080ead40;
      *(int *)(param_1 + 0x14) = iVar2;
      sub_08002638(&DAT_08433cdc,(DAT_0202e726 - 0x350) * 0x20 + 0x10000);
      sub_08002AEC(&DAT_08433ce8,(DAT_0202e526 - 0xe) * 0x20 + 0x200);
    }
    *(undefined *)(param_1 + 3) = 1;
    iVar2 = *(byte *)(param_1 + 4) + 0xa0;
    sub_08002638(&DAT_08432d00 + iVar2 * 5,
                 ((uint)(ushort)(&DAT_0202e590)[iVar2] -
                 (uint)((ushort)(&DAT_08432d06)[iVar2 * 10] >> 6)) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08432d0c + iVar2 * 0x14,
                 ((uint)(ushort)(&DAT_0202e390)[iVar2] - (uint)(byte)(&DAT_08432d13)[iVar2 * 0x14])
                 * 0x20 + 0x200);
    sub_080D5CF8(*(undefined4 *)(param_1 + 0x10),*(undefined *)(param_1 + 4),
                 *(undefined4 *)(param_1 + 0x18));
    *(undefined *)(param_1 + 6) = 4;
    cVar1 = sub_080EAD48(param_1,(int)(char)param_2);
    iVar2 = (int)cVar1;
  }
  return CONCAT44(in_lr,iVar2);
}

