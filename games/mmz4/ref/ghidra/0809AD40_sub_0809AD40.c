// sub_0809AD40 at 0x0809AD40 (thumb)

undefined4 sub_0809AD40(int param_1)

{
  undefined4 in_lr;
  undefined auStack_c [4];
  
  sub_08128B5C(auStack_c,&DAT_08129548,3);
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(char *)(param_1 + 0xb5) == '\0')) &&
     (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2)) {
    if ((*(char *)(param_1 + 0xb7) != '\x02') && ((*(uint *)(param_1 + 0x8c) & 0x800) != 0)) {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885daf0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  *(undefined *)(param_1 + 0xd) = auStack_c[*(byte *)(param_1 + 0xb7)];
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_0809B154(param_1);
  return in_lr;
}

