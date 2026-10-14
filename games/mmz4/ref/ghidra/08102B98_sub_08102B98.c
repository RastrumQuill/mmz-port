// sub_08102B98 at 0x08102B98 (thumb)

undefined4 sub_08102B98(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_088687c0 + (uint)*(byte *)(param_1 + 0xb4) * 4));
LAB_08102c3a:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    if (*(char *)(param_1 + 0x71) == '\x02') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08005760(param_1 + 0x74,&UNK_088687d0 + (uint)*(byte *)(param_1 + 0xb4) * 0x18,
                   param_1 + 0x54,0x80);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      uVar1 = 0x10;
LAB_08102c38:
      *(undefined *)(param_1 + 0x12) = uVar1;
      goto LAB_08102c3a;
    }
  }
  else if (*(char *)(param_1 + 0x12) == '\0') {
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_088687c2 + (uint)*(byte *)(param_1 + 0xb4) * 4));
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    uVar1 = 0xff;
    goto LAB_08102c38;
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    *(undefined *)(param_1 + 0x13) = (undefined)DAT_0202dae0;
    sub_0801CFF0(param_1);
    return in_lr;
  }
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    cVar2 = *(char *)(param_1 + 0xb4);
    if (cVar2 == '\x03') {
      *(char *)(param_1 + 0xb4) = '\0';
      goto LAB_08102c7e;
    }
    cVar2 = cVar2 + '\x01';
  }
  else {
    cVar2 = *(char *)(param_1 + 0xb4);
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xb4) = '\x03';
      goto LAB_08102c7e;
    }
    cVar2 = cVar2 + -1;
  }
  *(char *)(param_1 + 0xb4) = cVar2;
LAB_08102c7e:
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

