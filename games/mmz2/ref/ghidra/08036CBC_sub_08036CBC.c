// sub_08036CBC at 0x08036CBC (thumb)

undefined8 sub_08036CBC(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x1f5) == '\x01') {
    if (param_2 == *(byte *)(param_1 + 0x212)) {
      uVar2 = 0x10;
    }
    if (param_2 == *(byte *)(param_1 + 0x213)) {
      uVar2 = uVar2 | 0x80;
    }
  }
  else {
    if (*(char *)(param_1 + 0x1f5) == '\x02') {
      uVar1 = (uint)*(byte *)(param_1 + 0x212 + (uint)*(byte *)(param_1 + 0x214));
    }
    else if ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 0x80) == 0) {
      uVar1 = (uint)*(byte *)(param_1 + 0x212);
    }
    else {
      uVar1 = (uint)*(byte *)(param_1 + 0x213);
    }
    if (param_2 == uVar1) {
      uVar2 = 0x10;
    }
  }
  return CONCAT44(in_lr,uVar2);
}

