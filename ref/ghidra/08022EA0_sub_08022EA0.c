// sub_08022EA0 at 0x08022EA0 (thumb)

undefined4 sub_08022EA0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x115) == '\x1a') {
    if (('\0' < *(char *)(param_1 + 0x120)) &&
       ((*(byte *)(param_1 + 0x19a) < 0x3c ||
        ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 2) == 0)))) {
      *(char *)(param_1 + 0x120) = '\0';
    }
    if (((*(char *)(param_1 + 0x71) == '\x02') && (*(char *)(param_1 + 0x72) < '\x02')) &&
       ('\0' < *(char *)(param_1 + 0x120))) {
      sub_08018BE8(param_1,0x1b);
      sub_08027188(param_1,5,0);
      *(char *)(param_1 + 0x120) = '\0';
      return in_lr;
    }
  }
  else if (*(char *)(param_1 + 0x115) != -0x65) {
    if ((-1 < *(char *)(param_1 + 0x120)) &&
       (bVar1 = sub_0801B50C(param_1,1), (bVar1 & *(byte *)(param_1 + 0x12d)) != 0)) {
      *(char *)(param_1 + 0x120) = '\x01';
    }
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    if ('\0' < *(char *)(param_1 + 0x120)) {
      *(char *)(param_1 + 0x120) = '\0';
      return in_lr;
    }
    sub_08018C20(param_1,0x1a,2,1);
    return in_lr;
  }
  if ((byte)(*(char *)(param_1 + 0x73) - 2U) < 2) {
    sub_0801846C(param_1);
  }
  return in_lr;
}

