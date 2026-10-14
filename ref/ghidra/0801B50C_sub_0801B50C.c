// sub_0801B50C at 0x0801B50C (thumb)

undefined8 sub_0801B50C(int param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x219) == '\x01') {
    if (param_2 == *(char *)(param_1 + 0x18a)) {
      uVar2 = 0x10;
    }
    if (param_2 == *(char *)(param_1 + 0x18b)) {
      uVar2 = uVar2 | 0x80;
    }
  }
  else {
    if (*(char *)(param_1 + 0x219) == '\x02') {
      cVar1 = *(char *)((uint)*(byte *)(param_1 + 0x19c) + param_1 + 0x18a);
    }
    else if ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 0x80) == 0) {
      cVar1 = *(char *)(param_1 + 0x18a);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x18b);
    }
    if (param_2 == cVar1) {
      uVar2 = 0x10;
    }
  }
  return CONCAT44(in_lr,uVar2);
}

