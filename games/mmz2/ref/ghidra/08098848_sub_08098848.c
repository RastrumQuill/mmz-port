// sub_08098848 at 0x08098848 (thumb)

undefined4 sub_08098848(int param_1)

{
  undefined uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x02') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
    }
    else {
      piVar2 = *(int **)(param_1 + 0xb8);
      piVar6 = *(int **)(param_1 + 0xb4);
      iVar5 = *piVar6;
      uVar1 = *(undefined *)(param_1 + 0x10);
      iVar3 = sub_080EF150(*piVar2 - iVar5,uVar1);
      iVar4 = sub_080EF150(piVar2[1] - piVar6[1],uVar1);
      *(uint *)(param_1 + 0x54) = iVar5 + (uint)*(byte *)(param_1 + 0x11) * iVar3;
      *(uint *)(param_1 + 0x58) =
           (*(int **)(param_1 + 0xb4))[1] + iVar4 * (uint)*(byte *)(param_1 + 0x11);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080988FC(param_1);
  }
  return in_lr;
}

