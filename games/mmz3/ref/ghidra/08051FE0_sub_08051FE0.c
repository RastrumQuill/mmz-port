// sub_08051FE0 at 0x08051FE0 (thumb)

undefined4 sub_08051FE0(int param_1)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (*(char *)(param_1 + 0x13) == '\0') {
          *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x80;
          sub_08007390(param_1 + 0x74,&DAT_0835feec);
          sub_08017700(param_1,0x4d03);
        }
        else {
          sub_08007390(param_1 + 0x74,&DAT_0835ff4c);
          *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x100;
          sub_08017700(param_1,0x4d08);
        }
        sub_08080770(param_1,*(undefined *)(param_1 + 0x13));
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      puVar3 = (uint *)(param_1 + 0xb4);
      if ((*puVar3 & 0x40) != 0) {
        *puVar3 = *puVar3 & 0xffffffbf;
        sub_08080538(param_1);
      }
      if ((*puVar3 & 0x180) == 0) {
        sub_08017700(param_1,0x4d01);
        *puVar3 = *puVar3 & 0xffffffdf;
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 1;
        *(undefined *)(param_1 + 0x12) = 0x46;
      }
      sub_080041E4(*(undefined *)(param_1 + 0xb8));
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800471C(0xe4);
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xffffffbf | 0x20;
    if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
      sub_08007390(param_1 + 0x74,&DAT_0835ffac);
      *(undefined *)(param_1 + 0x13) = 0;
      sub_08017700(param_1,0x4d02);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_08360024);
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08017700(param_1,0x4d07);
    }
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080041E4(*(undefined *)(param_1 + 0xb8));
  sub_080177F4(param_1);
  return in_lr;
}

