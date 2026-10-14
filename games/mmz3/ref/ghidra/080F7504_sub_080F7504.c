// sub_080F7504 at 0x080F7504 (thumb)

undefined8 sub_080F7504(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  if ((*(byte *)(DAT_0203063c + param_2) & 2) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x64ac) + 0xce) == '\x02') {
      cVar1 = sub_080E17C8(param_2);
      if (cVar1 == '\0') {
        sub_080E9604(&DAT_08370e42,0x11,0xd);
      }
    }
    else {
      sub_080E9604(&DAT_08370e42,0x11,0xd);
    }
  }
  if ((((uint)(byte)(&DAT_0836e30c)[param_2 * 4] << 0x1a) >> 0x1d == 2) &&
     ((*(byte *)(DAT_0203063c + param_2) & 4) != 0)) {
    if (param_2 < 0x1b) {
      iVar2 = param_2 + 0x10b;
      goto LAB_080f75c4;
    }
    if (param_2 < 0x28) {
      iVar2 = param_2 + 0x102;
      goto LAB_080f75c4;
    }
  }
  iVar2 = param_2 + 200;
LAB_080f75c4:
  return CONCAT44(in_lr,iVar2);
}

