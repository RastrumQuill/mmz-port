// sub_080671AC at 0x080671AC (thumb)

undefined4 sub_080671AC(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = DAT_02022ae0 & 0x10;
  if ((DAT_02022ae0 & 0x10) == 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0bc8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      if (*(char *)(param_1 + 0xf) == '\0') {
        sub_0808827C(2,param_1 + 0x4c);
        uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
        uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar4 & 0x7fffffff;
        sub_0807E118(param_1,0xb,uVar3 * 2 >> 0x11 & 0xff | 0x100,
                     (int)(((uVar4 * 2 >> 0x11 & 7) + 4) * -0x400000) >> 0x10);
        uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
        uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar4 & 0x7fffffff;
        sub_0807E118(param_1,0xc,(int)((-0x100 - (uVar3 * 2 >> 0x11 & 0xff)) * 0x10000) >> 0x10,
                     (int)(((uVar4 * 2 >> 0x11 & 7) + 4) * -0x400000) >> 0x10);
        sub_08001EAC(2);
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 4;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
      }
      else {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x200;
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if ((cVar2 == -1) || (cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c)), cVar2 != '\0'))
        {
          *(byte *)(param_1 + 0xf) = bVar1;
        }
      }
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

