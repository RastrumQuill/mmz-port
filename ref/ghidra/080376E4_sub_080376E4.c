// sub_080376E4 at 0x080376E4 (thumb)

undefined4 sub_080376E4(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 4) == 0) {
    cVar2 = sub_08038BAC(param_1);
    if (cVar2 == '\0') {
      return in_lr;
    }
    uVar1 = 4;
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    sub_08038A5C(param_1,0xd);
    uVar1 = 3;
  }
  *(undefined *)(param_1 + 0xf) = uVar1;
  return in_lr;
}

