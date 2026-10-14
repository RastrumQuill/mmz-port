// sub_08035C1C at 0x08035C1C (thumb)

undefined4 sub_08035C1C(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(short *)(*(int *)(param_1 + 0x28) + 4) != 2) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b37c + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b38c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x28) + 0xc);
  cVar2 = *(char *)(param_1 + 0x27d);
  if (cVar2 == cVar1) {
    if (cVar2 == '\0') {
      sub_080177F4(param_1);
    }
  }
  else {
    *(char *)(param_1 + 0x27d) = cVar1;
    if (cVar1 == '\x02') {
      sub_0800471C(4);
    }
    else if (cVar1 == '\x01') {
      sub_0800471C(0x4a);
    }
    else if (cVar1 == '\0') {
      sub_08017700(param_1,0xb313);
      sub_080177F4(param_1);
      sub_0800471C(0x47);
    }
  }
  return in_lr;
}

