// sub_0803462C at 0x0803462C (thumb)

undefined8 sub_0803462C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (((*(ushort *)(param_1 + 0xc6) & 0x100) == 0) ||
     (bVar1 = sub_08033B40(param_1,*(char *)(param_1 + 0xc0) != '\x02'), bVar1 < 3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

