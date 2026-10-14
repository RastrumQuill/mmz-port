// sub_0802A344 at 0x0802A344 (thumb)

undefined4 sub_0802A344(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x218);
  if ((uVar2 & 0x41) == 1) {
    if ((*(char *)(param_1 + 0xe) == '\x01') && (*(byte *)(param_1 + 0xf) < 2)) {
      *(undefined *)(param_1 + 0x113) = 1;
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x58) + 0xd00;
    }
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x124) & 1;
    if ((*(byte *)(param_1 + 0x124) & 1) == 0) {
      if (*(char *)(param_1 + 0xe) == '\0') {
        if ((uVar2 & 0x80) == 0) {
          return in_lr;
        }
        if (*(char *)(param_1 + 0xf) != '\x01') {
          return in_lr;
        }
        *(undefined *)(param_1 + 0xe) = 1;
      }
      else {
        if ((uVar2 & 0x40) == 0) {
          return in_lr;
        }
        if (*(char *)(param_1 + 0xf) != '\x02') {
          return in_lr;
        }
        *(byte *)(param_1 + 0xe) = bVar1;
      }
      *(byte *)(param_1 + 0xf) = bVar1;
    }
  }
  return in_lr;
}

