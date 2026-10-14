// sub_080236E8 at 0x080236E8 (thumb)

undefined4 sub_080236E8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 2;
    sub_08027188(param_1,6,0);
  }
  if ((99 < *(byte *)(param_1 + 0x19b)) &&
     (bVar1 = sub_0801B50C(param_1,1), (bVar1 & *(byte *)(param_1 + 0x12d)) != 0)) {
    *(undefined *)(param_1 + 0x120) = 1;
  }
  return in_lr;
}

