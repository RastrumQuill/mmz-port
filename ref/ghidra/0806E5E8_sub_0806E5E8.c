// sub_0806E5E8 at 0x0806E5E8 (thumb)

undefined4 sub_0806E5E8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x12) & 3) < 2) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    sub_08096DCC(param_1,1);
    sub_08001EAC(0x95);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

