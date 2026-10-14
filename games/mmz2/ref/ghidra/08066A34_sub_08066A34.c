// sub_08066A34 at 0x08066A34 (thumb)

undefined4 sub_08066A34(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x10) != '\x02') {
LAB_08066ac4:
    if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_08066B9C(param_1);
      return in_lr;
    }
    iVar2 = sub_08065A24(param_1);
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0x10) == '\x02') {
        *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + *(int *)(param_1 + 100);
        *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + *(int *)(param_1 + 0x68);
      }
      sub_080127E4(param_1,0x900);
      sub_080128D4(param_1);
      sub_08006E08(param_1 + 0x74,&DAT_0833dc5c);
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\x02') {
      sub_080128D4(param_1);
      *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + *(int *)(param_1 + 0x68);
      sub_080EF118(param_1,*(undefined4 *)(&DAT_0833dc20 + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
    sub_08066C64(param_1);
    sub_08066C9C(param_1);
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833dc20 + (uint)*(byte *)(param_1 + 0xd) * 4));
    return in_lr;
  }
  uVar4 = DAT_0202ebbb & 1;
  if ((DAT_0202ebbb & 1) == 0) {
    uVar3 = DAT_0202ebbb & 0x20;
    if ((DAT_0202ebbb & 0x20) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = uVar4;
      *(uint *)(param_1 + 0x90) = uVar4;
      *(char *)(param_1 + 0x94) = (char)uVar4;
      goto LAB_08066aa4;
    }
    if (*(byte *)(iVar5 + 0xc) < 2) goto LAB_08066ac4;
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
    uVar3 = 0;
  }
  *(byte *)(param_1 + 10) = bVar1 & 0xfc;
  *(uint *)(param_1 + 0x8c) = uVar3;
  *(uint *)(param_1 + 0x90) = uVar3;
  *(char *)(param_1 + 0x94) = (char)uVar3;
LAB_08066aa4:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

