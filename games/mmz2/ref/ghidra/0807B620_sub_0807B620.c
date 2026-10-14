// sub_0807B620 at 0x0807B620 (thumb)

undefined4 sub_0807B620(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080127E4(param_1,*(byte *)(param_1 + 0x10) + 0x5004);
      sub_08006E08(param_1 + 0x74,&DAT_08340208 + (uint)*(byte *)(param_1 + 0x10) * 0x30);
    }
    else {
      sub_080127E4(param_1,*(byte *)(param_1 + 0x10) + 0x5024);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(iVar3 + 0xbe);
  if (cVar1 == '\x02') {
    uVar2 = 3;
  }
  else if (cVar1 == '\x03') {
    if (1 < *(byte *)(param_1 + 0x10)) {
      return in_lr;
    }
    uVar2 = 5;
  }
  else if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x10) != '\x02') {
      return in_lr;
    }
    uVar2 = 8;
  }
  else if (cVar1 == '\x05') {
    uVar2 = 0xb;
  }
  else {
    if (cVar1 != '\x06') {
      return in_lr;
    }
    uVar2 = 0xd;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

