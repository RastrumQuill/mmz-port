// sub_08054ED0 at 0x08054ED0 (thumb)

undefined4 sub_08054ED0(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = sub_080FE124(0xaa);
    *(undefined *)(param_1 + 0x12) = uVar1;
    uVar3 = sub_080FE124(0xaa);
    *(uint *)(param_1 + 0x5c) = (uVar3 & 0xffff) * -0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_08054f32;
  piVar4 = (int *)(param_1 + 0xb8);
  *piVar4 = *piVar4 + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x18;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *piVar4 = 0x8000;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
LAB_08054f32:
  if (*(char *)(param_1 + 0xbc) == '\0') {
    cVar2 = (char)((uint)*(undefined4 *)(param_1 + 0xb8) >> 8);
  }
  else {
    cVar2 = -(char)((uint)*(undefined4 *)(param_1 + 0xb8) >> 8);
  }
  *(char *)(param_1 + 0x24) = cVar2;
  return in_lr;
}

