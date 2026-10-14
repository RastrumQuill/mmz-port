// sub_080847F0 at 0x080847F0 (thumb)

undefined4 sub_080847F0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        local_1c = *(int *)(param_1 + 0x54) + -0x400;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          local_1c = *(int *)(param_1 + 0x54) + 0x400;
        }
        local_18 = *(int *)(param_1 + 0x58) + 0x1500;
        sub_0809C41C(&local_1c,0x300,
                     (&DAT_08364b38)[((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1c & 1]);
        local_1c = *(int *)(param_1 + 0x54) + -0x100;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          local_1c = *(int *)(param_1 + 0x54);
        }
        local_18 = *(int *)(param_1 + 0x58) + 0x1b00;
        iVar3 = 2;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          iVar3 = 3;
        }
        sub_0809C41C(&local_1c,0x300,(&DAT_08364b38)[iVar3]);
        sub_0800471C(0x2c);
        sub_08017700(param_1,0x6604);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

