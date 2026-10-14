// sub_0811E4B4 at 0x0811E4B4 (thumb)

undefined4 sub_0811E4B4(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = DAT_0202f384;
  if (*(char *)(param_1 + 0xdd2) != '\0') {
    if (*(char *)(param_1 + 0xdd2) == ')') {
      cVar1 = *(char *)(param_1 + 0xdd4) + '\x01';
      *(char *)(param_1 + 0xdd4) = cVar1;
      if (cVar1 == '\x04') {
        sub_0811E424(param_1,0x2c);
      }
      else if (cVar1 == '\b') {
        sub_0811E424(param_1,0x2d);
      }
      else if (cVar1 == '\f') {
        sub_0811E424(param_1,0x29);
      }
    }
    iVar4 = iVar4 + 0x342;
    uVar2 = 0;
    do {
      sub_08000B30(&DAT_088860b4 + (short)uVar2 * 0xc,iVar4,0xc);
      uVar3 = (int)(short)uVar2 + 1;
      iVar4 = iVar4 + 0x40;
      uVar2 = uVar3 & 0xffff;
    } while ((int)(uVar3 * 0x10000) >> 0x10 < 6);
  }
  return in_lr;
}

