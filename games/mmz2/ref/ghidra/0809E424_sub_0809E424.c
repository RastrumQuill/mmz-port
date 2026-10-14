// sub_0809E424 at 0x0809E424 (thumb)

undefined4 sub_0809E424(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar4 + 0xdc) == '\0') {
    sub_080128D4(param_1);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(uint *)(param_1 + 0x58) =
           (*(int *)(param_1 + 0xb8) - ((uint)*(byte *)(param_1 + 0x11) * 0x4000 + 0x2000)) +
           (uint)*(byte *)(param_1 + 0x12) * -0xc00;
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 4;
      *(undefined *)(param_1 + 0xd) = 1;
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar3 = param_1 + 0x54;
      sub_0809E0AC(iVar4,iVar3,2,0);
      sub_0809E0AC(iVar4,iVar3,2,1);
      sub_0809E0AC(iVar4,iVar3,2,2);
      sub_0809E0AC(iVar4,iVar3,2,3);
      sub_0809E0AC(iVar4,iVar3,2,4);
      sub_0809E0AC(iVar4,iVar3,2,5);
      sub_0809E0AC(iVar4,iVar3,3,0);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
  sub_0809E134(param_1);
  return in_lr;
}

