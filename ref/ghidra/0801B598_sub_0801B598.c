// sub_0801B598 at 0x0801B598 (thumb)

undefined4 sub_0801B598(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (((((*(uint *)(param_1 + 0xc) & 0xffff00) != 0x20600) && (*(byte *)(param_1 + 0xd) < 9)) &&
      (*(byte *)(param_1 + 0xd) != 7)) && ((DAT_02022b62 & 0x8000) == 0)) {
    if (*(char *)(param_1 + 0x219) == '\x02') {
      bVar1 = sub_0801C4FC(param_1);
      if ((1 < bVar1) && ((*(byte *)(param_1 + 0x12d) & 0x80) != 0)) {
        if (*(byte *)(param_1 + 0xbe) < 2) {
          uVar2 = 0;
          if (*(byte *)(param_1 + 0x19c) == 0) {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = -(uint)(*(byte *)(param_1 + 0x18b) ^ *(byte *)(param_1 + 0x11)) >> 0x1f;
        }
        if (uVar2 != *(byte *)(param_1 + 0x19c)) {
          *(char *)(param_1 + 0x19c) = (char)uVar2;
          sub_08001EAC(0xd3);
        }
      }
    }
    else {
      *(undefined *)(param_1 + 0x19c) = 0;
    }
  }
  return in_lr;
}

