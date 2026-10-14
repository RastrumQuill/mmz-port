// sub_080C7E18 at 0x080C7E18 (thumb)

undefined4 sub_080C7E18(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  bVar2 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_0801CFF0(param_1);
  *(uint *)(param_1 + 0x54) =
       *(int *)(iVar3 + 0x54) + ((bVar2 >> 4 & 1) * 2 + -1) * -0x1000 * (bVar1 + 1);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
  if (*(char *)(iVar3 + 0xd) == '\x02') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

