// sub_080E5590 at 0x080E5590 (thumb)

undefined4 sub_080E5590(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xb4);
  sub_080177F4(param_1);
  if (DAT_0202f5d0 == '\0') {
    if (*(char *)(iVar2 + 0x232) == '\0') {
      if (((*(uint *)(iVar2 + 0x8c) & 0x200) == 0) && (*(short *)(iVar2 + 0xa4) != 0)) {
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836e75c + (uint)*(byte *)(param_1 + 0xd) * 4));
        pcVar3 = (char *)(param_1 + 0xc1);
        cVar1 = *pcVar3;
        *pcVar3 = cVar1 + -1;
        if ((char)(cVar1 + -1) == -1) {
          sub_080BF760(param_1 + 0x54,2);
          *pcVar3 = ' ';
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8);
      }
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 0xc);
    }
  }
  return in_lr;
}

