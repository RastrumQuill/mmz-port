// sub_08036BB4 at 0x08036BB4 (thumb)

undefined4 sub_08036BB4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x71);
  if (*(char *)(param_1 + 0xd) != '\r') {
    sub_080128D4(param_1);
  }
  if (cVar1 != *(char *)(param_1 + 0x71)) {
    sub_0803756C(param_1,*(undefined *)(param_1 + 0x17f));
  }
  return in_lr;
}

