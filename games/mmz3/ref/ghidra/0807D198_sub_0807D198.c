// sub_0807D198 at 0x0807D198 (thumb)

undefined4 sub_0807D198(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = 0 < *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    if (*(char *)(param_1 + 0x10) == '\x01') {
      bVar1 = !bVar1;
    }
    uVar4 = (uint)bVar1;
    if (uVar4 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar4 * -0x100;
    sub_08017700(param_1,*(undefined2 *)
                          (&DAT_0836441e +
                          ((uint)*(byte *)(param_1 + 0x10) * 2 + (uint)*(byte *)(param_1 + 0xb8)) *
                          2));
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      uVar4 = (uint)(bVar1 ^ 1);
    }
    local_1c = uVar4 * -0xc0 + 0x60;
    local_18 = 0x60;
    sub_080B7EA0(param_1,param_1 + 0x54,&local_1c,0,
                 &UNK_08364426 +
                 ((uint)*(byte *)(param_1 + 0x10) * 2 + (uint)*(byte *)(param_1 + 0xb8)) * 2,0x18);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    sub_0807D108(param_1);
  }
  return in_lr;
}

