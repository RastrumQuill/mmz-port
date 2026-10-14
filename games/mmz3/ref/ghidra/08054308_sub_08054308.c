// sub_08054308 at 0x08054308 (thumb)

undefined4 sub_08054308(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    *(undefined *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    sub_0800471C(0xd1);
    sub_08017700(param_1,0xb01e);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_08054350;
  sub_080177F4(param_1);
LAB_08054350:
  iVar1 = sub_08025794(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0xff;
  }
  return in_lr;
}

