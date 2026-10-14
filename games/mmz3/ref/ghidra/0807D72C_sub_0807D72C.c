// sub_0807D72C at 0x0807D72C (thumb)

undefined4 sub_0807D72C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x1e;
    sub_08007390(param_1 + 0x74,&DAT_083644bc);
    sub_08017700(param_1,*(undefined2 *)
                          (&DAT_0836450e + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2)));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

