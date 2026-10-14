// sub_080360D8 at 0x080360D8 (thumb)

undefined4 sub_080360D8(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 + 0x102);
  bVar1 = *pbVar2;
  if (bVar1 == 1) {
LAB_08036112:
    sub_0803A3BC(param_1,0x1201);
    if (*(char *)(param_1 + 0xe) != '\x02') {
      return in_lr;
    }
    *(char *)(param_1 + 0x102) = *(char *)(param_1 + 0x102) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_0801CF00(param_1,0x1201);
      sub_0803C490(param_1,0x11);
      *pbVar2 = *pbVar2 + 1;
      goto LAB_08036112;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      goto LAB_08036140;
    }
  }
  sub_0801CF00(param_1,0x1202);
  *(char *)(param_1 + 0x102) = *(char *)(param_1 + 0x102) + '\x01';
LAB_08036140:
  sub_0803A3BC(param_1,0x1202);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      sub_0801CFC8(param_1,0x403,2,1);
    }
    else {
      sub_0801CFC8(param_1,0x404,2,1);
    }
    *(undefined *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}

