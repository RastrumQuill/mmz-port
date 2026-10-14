// sub_0807E0E0 at 0x0807E0E0 (thumb)

undefined4 sub_0807E0E0(int param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined *)(param_1 + 0xbb) = 0;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 0x1d);
  if ((*(uint *)(&DAT_0202f5e0 + (uint)(bVar1 >> 5) * 4) & 1 << (bVar1 & 0x1f)) == 0) {
    sub_08017B2C(param_1);
  }
  else {
    sub_08017BF8(param_1);
  }
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x94) == '\0') {
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) & 0x7f;
  }
  else {
    *(undefined *)(param_1 + 0x94) = 0x80;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(char *)(param_1 + 0xbb) =
         (char)*(undefined4 *)(param_1 + 0xb4) - (char)*(undefined2 *)(param_1 + 0xa4);
    if (*(char *)(*(int *)(param_1 + 0x28) + 0x94) == '\0') {
      sub_08007DC8(*(int *)(param_1 + 0x28) + 0x74,*(char *)(param_1 + 0xbb));
    }
  }
  pcVar3 = (char *)(param_1 + 0xc2);
  if (*pcVar3 == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
      *pcVar3 = '<';
      sub_0800471C(0x52);
    }
  }
  else {
    *pcVar3 = *pcVar3 + -1;
  }
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364548 + (uint)*(byte *)(param_1 + 0xd) * 4));
    iVar2 = sub_08063614(param_1);
    if (iVar2 == 0) {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08364554 + (uint)*(byte *)(param_1 + 0xd) * 4));
      *(int *)(param_1 + 0xb4) = (int)*(short *)(param_1 + 0xa4);
    }
    else {
      *(undefined *)(param_1 + 0xba) = *(undefined *)(param_1 + 0xd);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    uVar4 = uVar4 * 2 >> 0x11 & 3;
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(undefined4 *)(param_1 + 0x58);
    puVar5 = (undefined *)(param_1 + 0xb8);
    sub_080BE7C4(&local_18,*puVar5,0xab28,uVar4);
    sub_080BE7C4(&local_18,*puVar5,0xab29,uVar4);
    sub_080BE7C4(&local_18,*puVar5,0xab2a,uVar4);
    sub_080BE7C4(&local_18,*puVar5,0xab2b,uVar4);
    sub_0807E288(param_1);
  }
  return in_lr;
}

