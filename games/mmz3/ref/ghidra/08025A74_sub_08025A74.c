// sub_08025A74 at 0x08025A74 (thumb)

undefined8 sub_08025A74(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = sub_080259BC();
  if (cVar1 == '\0') {
    uVar2 = sub_08025A04(param_1);
    uVar2 = uVar2 & 0xff;
  }
  else {
    iVar3 = sub_08025A04(param_1);
    uVar2 = (uint)(iVar3 << 0x18) >> 0x19;
  }
  return CONCAT44(in_lr,uVar2);
}

